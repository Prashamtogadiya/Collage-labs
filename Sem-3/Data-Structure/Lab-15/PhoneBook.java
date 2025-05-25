public class PhoneBook {
    class PhoneBookEntry {
        String name;
        String phoneNumber;
        PhoneBookEntry left, right;

        public PhoneBookEntry(String name, String phoneNumber) {
            this.name = name;
            this.phoneNumber = phoneNumber;
            left = right = null;
        }
    }

    public PhoneBookEntry root;

    public void addEntry(String name, String phoneNumber) {
        root = addRecord(root, name, phoneNumber);
    }

    public PhoneBookEntry addRecord(PhoneBookEntry root, String name, String phoneNumber) {
        if (root == null) {
            root = new PhoneBookEntry(name, phoneNumber);
            return root;
        }

        if (name.compareTo(root.name) < 0)
            root.left = addRecord(root.left, name, phoneNumber);
        else if (name.compareTo(root.name) > 0)
            root.right = addRecord(root.right, name, phoneNumber);

        return root;
    }

    public String searchPhoneNumber(String name) {
        PhoneBookEntry result = searchRecord(root, name);
        return result != null ? result.phoneNumber : "Entry not found.";
    }

    public PhoneBookEntry searchRecord(PhoneBookEntry root, String name) {
        if (root == null || root.name.equals(name))
            return root;

        if (name.compareTo(root.name) < 0)
            return searchRecord(root.left, name);
        else
            return searchRecord(root.right, name);
    }

    public void removeEntry(String name) {
        root = removeRecord(root, name);
    }

    public PhoneBookEntry removeRecord(PhoneBookEntry root, String name) {
        if (root == null)
            return root;

        if (name.compareTo(root.name) < 0)
            root.left = removeRecord(root.left, name);
        else if (name.compareTo(root.name) > 0)
            root.right = removeRecord(root.right, name);
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;

            PhoneBookEntry replaceNode = root.right;
            while (replaceNode.left != null) {
                replaceNode = replaceNode.left;
            }
            root.name = replaceNode.name;
            root.right = removeRecord(root.right, replaceNode.name);
        }

        return root;
    }

    public void listAscending() {
        listAscendingRecord(root);
    }

    public void listAscendingRecord(PhoneBookEntry root) {
        if (root != null) {
            listAscendingRecord(root.left);
            System.out.println(root.name + ": " + root.phoneNumber);
            listAscendingRecord(root.right);
        }
    }

    public void listDescending() {
        listDescendingRecord(root);
    }

    public void listDescendingRecord(PhoneBookEntry root) {
        if (root != null) {
            listDescendingRecord(root.right);
            System.out.println(root.name + ": " + root.phoneNumber);
            listDescendingRecord(root.left);
        }
    }

    public static void main(String[] args) {
        PhoneBook phoneBook = new PhoneBook();

        phoneBook.addEntry("Alice", "12345");
        phoneBook.addEntry("Bob", "54321");
        phoneBook.addEntry("Charlie", "11111");
        phoneBook.addEntry("David", "22222");

        System.out.println("Search for Charlie: " + phoneBook.searchPhoneNumber("Charlie"));

        System.out.println("\nPhone book entries in ascending order:");
        phoneBook.listAscending();

        System.out.println("\nPhone book entries in descending order:");
        phoneBook.listDescending();

        phoneBook.removeEntry("Bob");
        System.out.println("\nAfter removing Bob, phone book entries in ascending order:");
        phoneBook.listAscending();
    }
}

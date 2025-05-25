import java.util.LinkedList;

class Polynomial {
    LinkedList<Term> list;

    class Term {
        int coefficient;
        int exponent;

        Term(int coefficient, int exponent) {
            this.coefficient = coefficient;
            this.exponent = exponent;
        }
    }

    public Polynomial() {
        list = new LinkedList<>();
    }

    public void addTerm(int coefficient, int exponent) {
        list.add(new Term(coefficient, exponent));
    }

    public Polynomial addPolynomial(Polynomial polynomial2) {
        Polynomial result = new Polynomial();

        int i = 0, j = 0;
        while (i < this.list.size() && j < polynomial2.list.size()) {
            Term t1 = this.list.get(i);
            Term t2 = polynomial2.list.get(j);

            if (t1.exponent == t2.exponent) {
                int sumCoefficient = t1.coefficient + t2.coefficient;
                if (sumCoefficient != 0) {
                    result.addTerm(sumCoefficient, t1.exponent);
                }
                i++;
                j++;
            } else if (t1.exponent > t2.exponent) {
                result.addTerm(t1.coefficient, t1.exponent);
                i++;
            } else {
                result.addTerm(t2.coefficient, t2.exponent);
                j++;
            }
        }

        while (i < this.list.size()) {
            Term t1 = this.list.get(i);
            result.addTerm(t1.coefficient, t1.exponent);
            i++;
        }

        while (j < polynomial2.list.size()) {
            Term t2 = polynomial2.list.get(j);
            result.addTerm(t2.coefficient, t2.exponent);
            j++;
        }

        return result;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        Term term = list.get(0);
        sb.append(term.coefficient).append("x^").append(term.exponent);
        for (int i = 1; i < list.size(); i++) {
            term = list.get(i);
            if (term.coefficient > 0) {
                sb.append(" + ");
            }
            else {
                sb.append(" - ");
            }
            sb.append(Math.abs(term.coefficient)).append("x^").append(term.exponent);
        }
        return sb.toString();
    }
}

public class PolynomialAddition {
    public static void main(String[] args) {
        Polynomial polynomial1 = new Polynomial();
        polynomial1.addTerm(3, 3);
        polynomial1.addTerm(5, 2);
        polynomial1.addTerm(2, 1);

        Polynomial polynomial2 = new Polynomial();
        polynomial2.addTerm(4, 3);
        polynomial2.addTerm(-5, 2);
        polynomial2.addTerm(1, 0);

        System.out.println("Polynomial 1: " + polynomial1);
        System.out.println("Polynomial 2: " + polynomial2);

        Polynomial result = polynomial1.addPolynomial(polynomial2);
        System.out.println("Resultant Polynomial after addition: " + result);
    }
}
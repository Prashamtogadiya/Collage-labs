class ThreeDPoint extends MyPoint {
    private double z;

    public ThreeDPoint() {
        super();
        this.z = 0;
    }

    public ThreeDPoint(double x, double y, double z) {
        super(x, y);
        this.z = z;
    }

    public double getZ() {
        return z;
    }

    @Override
    public double distance(MyPoint other) {
        if (other instanceof ThreeDPoint) {
            double dx = this.getX() - other.getX();
            double dy = this.getY() - other.getY();
            double dz = this.z - ((ThreeDPoint) other).z;
            return Math.sqrt(dx * dx + dy * dy + dz * dz);
        } else {
            throw new IllegalArgumentException("Other point must be a ThreeDPoint");
        }
    }
}
public class ThreeD {
    public static void main(String[] args) {
        ThreeDPoint p1 = new ThreeDPoint();
        ThreeDPoint p2 = new ThreeDPoint(10, 30, 25.5);

        System.out.println("Distance between p1 and p2: " + p1.distance(p2));
    }
}
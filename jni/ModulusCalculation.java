public class ModulusCalculation {
	static {
		System.loadLibrary("modulus"); // modulus.dll
	}

	private native int calculateModulus(int num1, int num2);
	
	public static void main(String[] args) {
		ModulusCalculation modulusCalculation = new ModulusCalculation ();
		System.out.println(modulusCalculation.calculateModulus(10, 2));
	}
}
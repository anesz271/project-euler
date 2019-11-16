public class LargestPrimeFactor {

    public static void main(String[] args) {

    long num = 600851475143L;
    long largestFactor = 0;
    long[] factors = new long[2];

        for (long i = 2; i*i < num/2 ; i++) {
        if (num % i == 0) {                     // is div
            factors[0] = i;
            factors[1] = num / i;

            for (int k = 0; k < 2; k++) {       // for the 2 factors
                boolean isPrime = true;
                for (long j = 2; j < factors[k]; j++) {
                    if (factors[k] % j == 0) {
                        isPrime = false;
                        break;                  // if not prime break
                    }
                }
                if (isPrime && (factors[k] > largestFactor)) {
                    largestFactor = factors[k];
                }
            }
        }
    }
        System.out.println(largestFactor);
}
}

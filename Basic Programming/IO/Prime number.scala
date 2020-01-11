/*
// Sample code to perform I/O:

val name = scala.io.StdIn.readLine()        // Reading input from STDIN
println("Hi, " + name + ".")                // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
object MainObject{
    def main(args: Array[String]){
        val n = scala.io.StdIn.readInt()
        var flag = 0
        for( i <- 2 to n)
            {
                flag = 0
                for( j <- 2 until i)
                    {
                        if(i%j == 0)
                            flag = 1
                    }
                if (flag == 0)
                    {
                        print(i)
                        print(' ')
                    }
            }
    }
}
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/
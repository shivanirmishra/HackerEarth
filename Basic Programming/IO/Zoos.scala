/*
// Sample code to perform I/O:

val name = scala.io.StdIn.readLine()        // Reading input from STDIN
println("Hi, " + name + ".")                // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
object MainObject {  
   def main(args: Array[String]) = {  
        val a = scala.io.StdIn.readLine()
        var (z,o,prev,flag) = (0,0,'z',0)
        for(c <- a)
            {
                if(c=='z')
                    {
                        if(prev != 'o')
                            z=z+1
                        else
                            flag = 1
                        prev = 'z'
                    }
                else
                    {   
                        o=o+1
                        prev = 'o'
                    }
            }
        if(z*2 != o)
            flag = 1
        
        if (flag == 0)
            println("Yes")
        else
            println("No")
    }  
}//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
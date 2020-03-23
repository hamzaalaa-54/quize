
package javaapplication46;

import java.util.Scanner;
import java.util.Date;
import java.text.SimpleDateFormat;
public class JavaApplication46 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    int row,sps,ast,roundsp,roundast,dis=0;
        for(row=1;row<=9;row++)
        {
            roundsp=(row<=5)?5-row:row-5;
            for(sps=1;sps<=roundsp;sps++){System.out.print(" ");}
            if(row>5) dis+=4;
            roundast=(row<5)?row*2-1 : row*2-1-dis;
            for(ast=1;ast<=roundast;ast ++)
            {System.out.print("*");}
            System.out.println();
        }
   

  
    
}}

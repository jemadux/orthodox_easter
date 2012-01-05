/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the
 * GNU General Public License
 * along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 * */
#include <cstdio> 
#include <cstdlib>
#include <iostream>

        using namespace std;

        int main ()
        {   
        cout<< "Calcuaation Orthodox Easter"<<endl ; 
           int  y , a, b, d, c ,e , day ; 
                      cout<< "Input the year you want "<<endl; 
                      cin>> y ;
            a=(y%19);b=(y%4);c=(y%7);d=(16+19*a)%30;e=((2*b)+(4*c)+(6*d))%7;
            day=3+d+e ;
             if (day <= 30 )
                cout<<"the orthodox easter is on "<< day << "April " << y <<endl;
             else
                  cout<<"The orthodox easter is on the  "<< day-30 <<" May and the year "<< y <<endl;
    return 0;   
        }

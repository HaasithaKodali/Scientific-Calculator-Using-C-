#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<cmath>
using namespace std;
int
main ()
{
  int choice, Add, Sub, Mul, ch, choice1, choice2, choice3, choice4, choice5,
    choice6, choice7, x[20][20], y[20][20], z[20][20], i, j, k, n, Factorial =
    1, f1, f2, f3, r, Power, sum = 1, t = 1;
  float c, p, g, a, b, Div;
  double q, result, qDegrees;
  char Y, N;
  do
    {
      cout << "\t1.Arthematic operatios" << endl;
      cout << "\t2.Power" << endl;
      cout << "\t3.Matrices" << endl;
      cout << "\t4.Factorial" << endl;
      cout << "\t5.Combinations & Permutations" << endl;
      cout << "\t6.Square root" << endl;
      cout << "\t7.Trigonometry functions" << endl;
      cout << "\t8.log to the base 10" << endl;
      cout << "\t9.log to the base e(ln)" << endl;
      cout << "\t10.Exponential" << endl;
      cout << "\t11.Exit" << endl;
      cout << "\tenter the value of choice:";
      cin >> choice;
      switch (choice)
	{
	case 1:
	  cout << "\t1.Addition" << endl;
	  cout << "\t2.Subtraction" << endl;
	  cout << "\t3.Multiplication" << endl;
	  cout << "\t4.Division" << endl;
	  cout << "\tenter  the value of choice:";
	  cin >> choice1;
	  switch (choice1)
	    {
	    case 1:
	      cout << "\tenter values of a,b:";
	      cin >> a >> b;
	      Add = a + b;
	      cout << "\tAdd=" << Add << endl;
	      break;
	    case 2:
	      cout << "\tenter values of a,b:";
	      cin >> a >> b;
	      Sub = a - b;
	      cout << "\tSub=" << Sub << endl;
	      break;
	    case 3:
	      cout << "\tenter values of a,b:";
	      cin >> a >> b;
	      Mul = a * b;
	      cout << "\tMul=" << Mul << endl;
	      break;
	    case 4:
	      cout << "\tenter values of a,b:";
	      cin >> a >> b;


	      Div = a / b;
	      cout << "\tDiv=" << Div << endl;
	      break;
	    default:
	      cout << "\tchoice should be from 1 to 4" << endl;
	      break;
	    }
	  break;
	case 2:
	  cout << "\tenter value of a,b:";
	  cin >> a >> b;
	  Power = pow (a, b);
	  cout << "\tPower=" << Power << endl;
	  break;
	case 3:
	  cout << "\t1.Addition of matrices" << endl;
	  cout << "\t2.Subtraction of matrices" << endl;
	  cout << "\t3.Multiplication of matrices" << endl;
	  cout << "\tEnter the value of choice:";
	  cin >> choice2;
	  switch (choice2)
	    {
	    case 1:
	      cout << "select the order of the matrix" << endl;
	      cout << "1.2 by 2 matrix" << endl;
	      cout << "2.3 by 3 matrix" << endl;
	      cout << "enter the value of choice:";
	      cin >> choice5;
	      switch (choice5)
		{
		case 1:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      z[i][j] = x[i][j] + y[i][j];
		  cout << "\tThe result matrix z is:" << endl;
		  for (i = 0; i < 2; i++)
		    {
		      for (j = 0; j < 2; j++)
			{
			  cout << z[i][j] << " ";
			}
		      cout << "\n";
		    }
		  break;
		case 2:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      z[i][j] = x[i][j] + y[i][j];
		  cout << "\tThe result matrix z is:" << endl;
		  for (i = 0; i < 3; i++)
		    {
		      for (j = 0; j < 3; j++)
			{
			  cout << z[i][j] << " ";
			}
		      cout << "\n";
		    }
		  break;
		default:
		  cout << "\tchoice should be 1-2" << endl;
		  break;
		}
	      break;
	    case 2:
	      cout << "select the order of the matrix" << endl;
	      cout << "1.2 by 2 matrix" << endl;
	      cout << "2.3 by 3 matrix" << endl;
	      cout << "enter the value of choice:";
	      cin >> choice6;
	      switch (choice6)
		{
		case 1:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      z[i][j] = x[i][j] - y[i][j];
		  cout << "\tThe result matrix z is:" << endl;
		  for (i = 0; i < 2; i++)
		    {
		      for (j = 0; j < 2; j++)
			{
			  cout << z[i][j] << " ";
			}
		      cout << "\n";
		    }
		  break;
		case 2:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      z[i][j] = x[i][j] - y[i][j];
		  cout << "\tThe result matrix z is:" << endl;
		  for (i = 0; i < 3; i++)
		    {
		      for (j = 0; j < 3; j++)
			{
			  cout << z[i][j] << " ";
			}
		      cout << "\n";
		    }
		  break;
		default:
		  cout << "\tchoice should be 1-2" << endl;
		  break;
		}
	      break;
	    case 3:
	      cout << "select the order of the matrix" << endl;
	      cout << "1.2 by 2 matrix" << endl;
	      cout << "2.3 by 3 matrix" << endl;
	      cout << "enter the value of choice:";
	      cin >> choice7;
	      switch (choice7)
		{
		case 1:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 2; i++)
		    for (j = 0; j < 2; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 2; i++)
		    {
		      for (j = 0; j < 2; j++)
			{
			  z[i][j] = 0;
			  for (k = 0; k < 2; k++)
			    {
			      z[i][j] = z[i][j] + x[i][k] * y[k][j];
			    }
			}
		    }
		  cout << "\tThe product matrix is:" << endl;
		  for (i = 0; i < 2; i++)
		    {
		      for (j = 0; j < 2; j++)
			cout << z[i][j] << " ";
		      cout << "\n";

		    }
		  break;
		case 2:
		  cout << "\tEnter the values of matrix x:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> x[i][j];
		  cout << "\tEnter the values of matrix y:";
		  for (i = 0; i < 3; i++)
		    for (j = 0; j < 3; j++)
		      cin >> y[i][j];
		  for (i = 0; i < 3; i++)
		    {
		      for (j = 0; j < 3; j++)
			{
			  z[i][j] = 0;
			  for (k = 0; k < 3; k++)
			    {
			      z[i][j] = z[i][j] + x[i][k] * y[k][j];
			    }
			}
		    }
		  cout << "\tThe product matrix is:" << endl;
		  for (i = 0; i < 3; i++)
		    {
		      for (j = 0; j < 3; j++)
			cout << z[i][j] << " ";
		      cout << "\n";

		    }
		  break;
		default:
		  cout << "\tchoice should be 1-2" << endl;
		  break;
		}
	      break;
	    default:
	      cout << "\tchoice should be 1-3" << endl;
	      break;

	    }
	  break;
	case 4:
	  cout << "\tEnter the value of n:";
	  cin >> n;
	  for (i = 1; i <= n; i++)
	    {
	      Factorial = Factorial * i;
	    }
	  cout << "\tFactorial=" << Factorial << endl;

	  break;
	case 5:
	  cout << "\t1.Combinations" << endl;
	  cout << "\t2.Permutations" << endl;
	  cout << "\tEnter the value of choice:";
	  cin >> choice3;
	  switch (choice3)
	    {
	    case 1:
	      cout << "\tenter the values of n,r:";
	      cin >> n >> r;
	      if (n >= r)
		{
		  f1 = 1;
		  for (i = 1; i <= n; i++)
		    f1 = f1 * i;
		  f2 = 1;
		  for (i = 1; i <= r; i++)
		    f2 = f2 * i;
		  f3 = 1;
		  for (i = 1; i <= n - r; i++)
		    f3 = f3 * i;
		  c = (float) f1 / (f2 * f3);
		  cout << "\tcombination result is:" << c << endl;
		}
	      else
		{
		  cout << "n should be greater than or equal to r" << endl;
		}
	      break;
	    case 2:
	      cout << "\tenter the values of n,r:";
	      cin >> n >> r;
	      if (n >= r)
		{
		  f1 = 1;
		  for (i = 1; i <= n; i++)
		    f1 = f1 * i;
		  f2 = 1;
		  for (i = 1; i <= n - r; i++)
		    f2 = f2 * i;
		  p = f1 / f2;
		  cout << "\tPermutation result is:" << p << endl;
		}
	      else
		{
		  cout << "n should be greater than or equal to r" << endl;
		}
	      break;
	    default:
	      cout << "\tchoice should be 1-2" << endl;
	      break;
	    }
	  break;
	case 6:
	  cout << "\tEnter the value of n:";
	  cin >> n;
	  sqrt (n);
	  cout << "\tsquare root on n:" << sqrt (n) << endl;
	  break;
	case 7:
	  cout << "\t1.Sin" << endl;
	  cout << "\t2.Cos" << endl;
	  cout << "\t3.Tan" << endl;
	  cout << "\tEnter the value of choice:";
	  cin >> choice4;
	  switch (choice4)
	    {
	    case 1:
	      cout << "enter the value of degrees:";
	      cin >> qDegrees;
	      q = qDegrees * 3.14159 / 180;
	      result = sin (q);

	      cout << "sin(q) = " << result << endl;


	      break;
	    case 2:
	      cout << "enter the value of degrees:";
	      cin >> qDegrees;
	      q = qDegrees * 3.14159 / 180;
	      result = cos (q);

	      cout << "cos(q) = " << result << endl;



	      break;
	    case 3:
	      cout << "enter the value of degrees:";
	      cin >> qDegrees;
	      if (qDegrees == 90)
		{
		  cout << "tan(q)=infinty" << endl;
		}
	      else if (qDegrees == 45)
		{
		  cout << "tan(q)=1" << endl;
		}
	      else
		{
		  q = qDegrees * 3.14159 / 180;
		  result = tan (q);

		  cout << "tan(q) = " << result << endl;


		}

	      break;
	    default:
	      cout << "\tchoice should be 1-3" << endl;
	      break;
	    }
	  break;
	case 8:
	  cout << "enter the value of r:";
	  cin >> r;
	  result = log10 (r);
	  cout << "log10(r) = " << result << endl;


	  break;
	case 9:
	  cout << "enter the value of r:";
	  cin >> r;
	  result = 2.3 * log10 (r);
	  cout << "log10(r) = " << result << endl;


	  break;

	case 10:
	  cout << "enter the value of q:";
	  cin >> q;

	  result = exp (q);
	  cout << "exp(q) = " << result << endl;


	  break;
	case 11:
	  exit (0);
	  break;


	default:
	  cout << "\tchoice should be 1-11" << endl;
	  break;

	}
    }

  while (choice != 11);
}

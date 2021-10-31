 Ackermann's Function computer 

long A(x, y)
long x;
long y;
   {
   if (x==0)
      return (y+1);
   if (y==0)
      return A(x-1,1);
   return A(x-1,A(x,y-1));
   }


main(argc, argv)
int argc;
char argv;
   {
   if (argc == 3)
      {
      long x = atol(argv[1]);
      long y = atol(argv[2]);
      printf(A(%ld,%ld) = %ldn, x, y, A(x,y));
      }
   }



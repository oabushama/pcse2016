program interfaceDemo
implicit none

integer :: i, j
real :: x, y


i = 1
j = 2

x = 1.5
y= 2.5

call printvalues_real(x, y)
call printvalues_integers(i, j)

contains

   subroutine printvalues_integers(a, b)
 
      integer :: a, b

      print *, a, b

   end subroutine printvalues_integers
   
   subroutine printvalues_real(a, b)

      real :: a, b

      print *, a, b

   end subroutine printvalues_real

end program interfaceDemo

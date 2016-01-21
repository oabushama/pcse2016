program interfaceDemo2
implicit none

!we're going to define out interface

interface printValues
   subroutine printValues_integer(a, b)
      integer :: a, b
   end subroutine printValues_integer

   subroutine printValues_real(a, b)
      real :: a, b
   end subroutine printValues_real

   subroutine printValues_integerArray(a)
      integer,dimension(:) :: a
   end subroutine printValues_integerArray
   
end interface printValues

integer, dimension(10) :: a
integer :: i, j
real :: x, y
character(len=10) :: char1

do i=1, 10
   a(i) = i*2
end do

i = 1
j = 2

x = 1.5
y = 2.5


call printValues(i, j)
call printValues(x, y)
call printValues(a)

print *, 'All done!'

end program

subroutine printValues_integer(a, b)
real :: a, b
print *, 'integer values:', a, b
end subroutine printValues_integer

subroutine printValues_real(a, b)
real :: a, b
print *, 'real values:', a, b
end subroutine printValues_real

subroutine printValues_integerArray(a)
integer :: a
integer :: i

print *, a
end subroutine

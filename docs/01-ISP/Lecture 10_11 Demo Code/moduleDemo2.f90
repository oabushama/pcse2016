
program ModuleDemo2

use printStuff

implicit none

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


module printStuff
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
end module

subroutine printValues_integer(a, b)
integer :: a, b
print *, 'integer values:', a, b
end subroutine printValues_integer

subroutine printValues_real(a, b)
real :: a, b
print *, 'real values:', a, b
end subroutine printValues_real

subroutine printValues_integerArray(a)
integer, dimension(:) :: a

print *, a
end subroutine printValues_integerArray

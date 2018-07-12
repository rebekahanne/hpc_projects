program helloname
implicit none
! Declaration section
character (len = 30) :: name

! Get username
write(*,*) 'Please enter your name: '
read(*,*) name

write(*,*) 'Hello ', trim(name), ', how are you?'

stop
end program

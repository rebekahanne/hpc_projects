!======================================================================
      program pi_rand
!======================================================================
!
!     this program generates random numbers in [0,1]
!
!......................................................................
      implicit none

      integer, parameter :: N = 10000
      integer, parameter :: seed = 86456
      ! real(8) :: r_number1, r_number2, dist, piapprox, piapprox1, piapprox2, piapprox3
      real(8) :: piapprox1, piapprox2, piapprox3
      integer :: i, count

!.....function to approximate pi/4
      function approx_pi(n)
          integer :: n, count
          real(8) :: r_number1, r_number2, dist, approx_pi
          do i = 1, n
            r_number1 = rand()
            r_number2 = rand()
            dist = r_number1 * r_number1 + r_number2 * r_number2
            IF (dist <= 1) THEN
              count = count + 1
            END IF
          end do

          approx_pi = (4.0 * count)  / n
      end function

!.....generate N random numbers
      ! call srand(seed)  !init. random sequence
      ! count = 0
      ! do i = 1, N
      !   r_number1 = rand()
      !   r_number2 = rand()
      !   dist = r_number1 * r_number1 + r_number2 * r_number2
      !   IF (dist <= 1) THEN
      !     count = count + 1
      !   END IF
      ! end do
      !
      ! piapprox = (4.0 * count)  / N
      ! write(*,*) "Pi = ", piapprox, " with N = ", N

      piapprox1 = approx_pi(1000)
      write(*,*) "Pi = ", piapprox1, " with N = ", N
!======================================================================
      end program pi_rand
!======================================================================

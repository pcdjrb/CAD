program matrizvetor
	real T1,T2
	
	real a(2**15,2**15), b(2**15), c(2**15)
	integer i,j
	
	call random_number(a)
	call random_number(b)
	call cpu_time(T1)
	do i=1,2**15
		c(i) = 0
		do j=1,2**15
			c(i) = c(i) + a(i,j)*b(j)
		end do
	end do
	
	call cpu_time(T2)
	
	print *,T2 - T1
	
	call cpu_time(T1)
	
	do j=1,2**15
		
		do i=1,2**15
			c(i)= c(i)+a(i,j)*b(j)
		end do
	end do
	
	call cpu_time(T2)
	print *,T2 - T1
	
	
	end program matrizvetor
####################################################################### 
all: pi.exe pi_MC.exe quadratic.exe hello_name.exe speedup.exe
####################################################################### 

## pi
pi.exe : pi.cpp
	g++ pi.cpp -o pi.exe

## pi Monte Carlo
pi_MC.exe : pi_MC.cpp
	g++ pi_MC.cpp -o pi_MC.exe

## quadratic
quadratic.exe : quadratic.cpp
	g++ quadratic.cpp -o quadratic.exe

## hello name
hello_name.exe : hello_name.cpp
	g++ hello_name.cpp -o hello_name.exe

## speedup
speedup.exe : speedup.cpp
	g++ speedup.cpp -o speedup.exe

####################################################################### 

clean :
	rm -f *.exe

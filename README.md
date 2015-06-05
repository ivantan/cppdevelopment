cppdevelopment
==============

working files for C++ Primer by S. Lippman, J. Lajoie, B. Moo and Accelerated C++ by Andrew Koenig

each program is named progX.cc where X is a number. refer below for more details.
for which programs belonging to the chapters in the book.

how to run the programs: (enter into terminal without the single quotes '')
you can either, 1) do 'g++ progX.cc', then run the a.out file, using './a.out'

or, 2) do 'g++ progX.cc -o prog', which outputs progX, then run the progX file, using './progX'
(note that with the first method (1) the resulting a.out will overwrite the previous a.out, and if 
compile fails the a.out file in your directory may be that of the previous successful compilation)

3) for abstracted programs such as prog.cc containing functions func1, func2 stored in source
files func1.cc, func2.cc and header files func1.h, func2.h - separate compiling should be done by
doing 'g++ -c filename' for each file, that is, 'g++ -c prog.cc; g++ -c func1.cc; g++ -c func2.cc'.
in this example all 3 files are compiled in one line, you can compile each file separate as and when
there are changes in a particular file, hence the separate compilatoion. finally, which each resulting
filename.o, do 'g++ func1.o func2.o prog.o -o prog', and run the program prog with './prog'
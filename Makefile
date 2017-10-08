all: cv.o grab.o raw.o bonecv.o edge.o

cv.o: capv4l2.c
	gcc -o $@ -lm -lopencv_core -lopencv_video -lopencv_highgui -lopencv_imgproc $<

grab.o: capgrab.c
	gcc -o $@ $<

raw.o: capraw.c
	gcc -o $@ $<

bonecv.o: bonecv.c
	g++ -o $@ -lm -lopencv_core -lopencv_video -lopencv_highgui -lopencv_imgproc $<

edge.o: edge.c
	g++ -o $@ -lm -lopencv_core -lopencv_video -lopencv_highgui -lopencv_imgproc $<

clean:
	rm *.jpg *.png *.ppm


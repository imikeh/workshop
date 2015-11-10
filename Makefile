#---------------------------------------------------------

CC = gcc

STKEXE = stack_main_int stack_main_short stack_main_long stack_main_float stack_main_double stack_main_char stack_main_ptr_to_int stack_main_ptr_to_short stack_main_ptr_to_long stack_main_ptr_to_float stack_main_ptr_to_double stack_main_ptr_to_char

QUEEXE = $(subst stack,queue,$(STKEXE))

STKINT = list_int.o stack_int.o stack_main_int.o mm.o

QUEINT = $(subst stack,queue,$(STKINT))

STKSRT = $(subst int,short,$(STKINT))

QUESRT = $(subst stack,queue,$(STKSRT))

STKLONG = $(subst int,long,$(STKINT))

QUELONG = $(subst stack,queue,$(STKLONG))

STKDOU = $(subst int,double,$(STKINT))

QUEDOU = $(subst stack,queue,$(STKDOU))

STKFLO = $(subst int,float,$(STKINT))

QUEFLO = $(subst stack,queue,$(STKFLO))

STKCHAR = $(subst int,char,$(STKINT))

QUECHAR = $(subst stack,queue,$(STKCHAR))

STKPTRINT = $(subst int,ptr_to_int,$(STKINT))

QUEPTRINT = $(subst stack,queue,$(STKPTRINT))

STKPTRSRT = $(subst int,short,$(STKPTRINT))

QUEPTRSRT = $(subst stack,queue,$(STKPTRSRT))

STKPTRLONG = $(subst int,long,$(STKPTRINT))

QUEPTRLONG = $(subst stack,queue,$(STKPTRLONG))

STKPTRDOU = $(subst int,double,$(STKPTRINT))

QUEPTRDOU = $(subst stack,queue,$(STKPTRDOU))

STKPTRFLO = $(subst int,float,$(STKPTRINT))

QUEPTRFLO = $(subst stack,queue,$(STKPTRFLO))

STKPTRCHAR = $(subst int,char,$(STKPTRINT))

QUEPTRCHAR = $(subst stack,queue,$(STKPTRCHAR))

#---------------------------------------------------------

all: $(STKEXE) $(QUEEXE)

stack_main_int: $(STKINT)
	$(CC) $(STKINT) -o $@

queue_main_int: $(QUEINT)
	$(CC) $(QUEINT) -o $@

stack_main_short: $(STKSRT)
	$(CC) $(STKSRT) -o $@

queue_main_short: $(QUESRT)
	$(CC) $(QUESRT) -o $@

stack_main_long: $(STKLONG)
	$(CC) $(STKLONG) -o $@

queue_main_long: $(QUELONG)
	$(CC) $(QUELONG) -o $@

stack_main_float: $(STKFLO)
	$(CC) $(STKFLO) -o $@

queue_main_float: $(QUEFLO)
	$(CC) $(QUEFLO) -o $@

stack_main_double: $(STKDOU)
	$(CC) $(STKDOU) -o $@

queue_main_double: $(QUEDOU)
	$(CC) $(QUEDOU) -o $@

stack_main_char: $(STKCHAR)
	$(CC) $(STKCHAR) -o $@

queue_main_char: $(QUECHAR)
	$(CC) $(QUECHAR) -o $@

stack_main_ptr_to_int: $(STKPTRINT)
	$(CC) $(STKPTRINT) -o $@

queue_main_ptr_to_int: $(QUEPTRINT)
	$(CC) $(QUEPTRINT) -o $@

stack_main_ptr_to_short: $(STKPTRSRT)
	$(CC) $(STKPTRSRT) -o $@

queue_main_ptr_to_short: $(QUEPTRSRT)
	$(CC) $(QUEPTRSRT) -o $@

stack_main_ptr_to_long: $(STKPTRLONG)
	$(CC) $(STKPTRLONG) -o $@

queue_main_ptr_to_long: $(QUEPTRLONG)
	$(CC) $(QUEPTRLONG) -o $@

stack_main_ptr_to_float: $(STKPTRFLO)
	$(CC) $(STKPTRFLO) -o $@

queue_main_ptr_to_float: $(QUEPTRFLO)
	$(CC) $(QUEPTRFLO) -o $@

stack_main_ptr_to_double: $(STKPTRDOU)
	$(CC) $(STKPTRDOU) -o $@

queue_main_ptr_to_double: $(QUEPTRDOU)
	$(CC) $(QUEPTRDOU) -o $@

stack_main_ptr_to_char: $(STKPTRCHAR)
	$(CC) $(STKPTRCHAR) -o $@

queue_main_ptr_to_char: $(QUEPTRCHAR)
	$(CC) $(QUEPTRCHAR) -o $@


.SUFFIXS: .c

%.o: %.c
	$(CC) -c $<

dep:
	gcc -M $(STKEXE).c $(QUEEXE).c >.depend

clean:
	rm -f *.o $(STKEXE) $(QUEEXE) .depend

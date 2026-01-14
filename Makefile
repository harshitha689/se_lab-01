CC = gcc
CFLAGS = -Wall -g

TARGET = student_report
SRCS = main.c validation.c compute_result.c print_result.c
OBJS = $(SRCS:.c=.o)
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(TARGET)

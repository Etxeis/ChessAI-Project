# Nombre del compilador
CC = gcc

# Opciones de compilación (muestra advertencias para ayudarte a programar mejor)
CFLAGS = -Wall -Wextra -g

# Nombre del archivo ejecutable que se va a crear
TARGET = ajedrez

# Todos los archivos .c de tu proyecto
SRCS = main.c chessboard.c pawn.c rook.c

# Convierte la lista de archivos .c en archivos de objeto .o (temporal)
OBJS = $(SRCS:.c=.o)

# Regla principal: compila todo y genera el ejecutable
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar cada archivo .c por separado en un .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos basura generados (.o y el ejecutable)
clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe


CC=gcc
#CFLAGS=-Wall -g -O2
CFLAGS= -g -O0
LD_FLAGS=-lpthread -lprotobuf-c
INC_FLAGS=-I../../boringssl/include -I../public/ -I../../boringssl/
BORING_PATH=../../boringssl/build/
STATIC_LIBS=${BORING_PATH}/crypto/libcrypto.a ${BORING_PATH}/ssl/libssl.a 
#LIBS=-lcrypto
ENGINE_OBJS =  rsa_engine.o remote_engine.o ../public/common.o tls_message.pb-c.o
all: rsa_client rsa_server remote_engine.o remote_server rsa_engine
	 
remote_server: remote_server.c
	$(CC) $(CFLAGS)  $(INC_FLAGS) $< -o $@  ../public/common.o tls_message.pb-c.o ${LD_FLAGS} ${STATIC_LIBS}  
rsa_engine: ${ENGINE_OBJS}
	$(CC) $(CFLAGS)  $(INC_FLAGS) $^ -o $@  ${STATIC_LIBS} ${LD_FLAGS} 
rsa_server: rsa_server.c
	$(CC) $(CFLAGS)  $(INC_FLAGS) $< -o $@  ../public/common.o ${LD_FLAGS} ${STATIC_LIBS} 
		 
rsa_client: rsa_client.c
	$(CC) $(CFLAGS)  $(INC_FLAGS) $< -o $@  ../public/common.o ${LD_FLAGS} ${STATIC_LIBS} 

%.o: %.c
	$(CC) $(CFLAGS)  $(INC_FLAGS) $< -c -o $@  ${LD_FLAGS}

clean:
	    @rm -f rsa_client rsa_server

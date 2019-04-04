package main

/*
#cgo CFLAGS: -I./lib -I/usr/local/include -I/usr/local/Cellar/openssl/1.0.2r/include
#cgo LDFLAGS: -L/usr/local/lib -L/usr/local/Cellar/openssl/1.0.2r/lib -lot-api -lgmp -lemp-tool -lrelic -lssl -lcrypto -lboost_system-mt
extern void SimpleOTClient(int, int *, int *, int);
*/
import "C"

import "unsafe"

func main() {

	var a1 = []int{123, 456}
	var a2 = []int{987, 654}
	C.SimpleOTClient(2, (*C.int)(unsafe.Pointer(&a1[0])), (*C.int)(unsafe.Pointer(&a2[0])), 12345)
}


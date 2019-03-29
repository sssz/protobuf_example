1, write addressbook.proto
2, generage addressbook_pb2.py
#complie pb to py
protoc --python_out=. addressbook.proto
3, generage addressbook.pb.h, addressbook.pb.cc
#complie pb to cpp
protoc --cpp_out=. addressbook.proto
4, write test.cpp
5, generate test
#cpp use pb
g++11 -o test test.cpp addressbook.pb.cc -lprotobuf
6, python test.py
###
id: 123
m {
  key: 456
  value: "world"
}
###
7, ./test t1_by_py
###
a= 10
b= 0
name: 0
name=
id: 1
id= 123
m.size= 1
key= 456value=world
###


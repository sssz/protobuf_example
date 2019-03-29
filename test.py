import addressbook_pb2 as pt

test = pt.t1()
test.name = "ok"
test.id = 123;
test.m[456] = "world"
print test.__str__()
f = open("t1_by_py", 'wb')
f.write(test.SerializeToString())
f.close()

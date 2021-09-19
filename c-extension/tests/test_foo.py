import foo


def test_system():
    assert foo.system("false") == 256

# ./test_libft.py

import ctypes
import unittest

# ライブラリをロード
lib = ctypes.CDLL('./libft.dylib', mode=ctypes.RTLD_GLOBAL)

# ft_isdigit 関数を設定
lib.ft_isdigit.restype = ctypes.c_int
lib.ft_isdigit.argtypes = [ctypes.c_int]

class TestLibft(unittest.TestCase):
    def test_ft_isdigit(self):
        # '0' (48) から '9' (57) の間は数字として1を返す
        self.assertEqual(lib.ft_isdigit(ord('0')), 1)
        self.assertEqual(lib.ft_isdigit(ord('5')), 1)
        self.assertEqual(lib.ft_isdigit(ord('9')), 1)

        # 数字以外は0を返す
        self.assertEqual(lib.ft_isdigit(ord('a')), 0)
        self.assertEqual(lib.ft_isdigit(ord(' ')), 0)

if __name__ == '__main__':
    unittest.main()


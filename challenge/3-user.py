#!/usr/bin/env python3
# 3-user.py

class User:
    def __init__(self, name, password):
        self.name = name
        self.__password = password  # Private attribute

    def is_valid_password(self, password):
        """Return True if the password matches the user's password"""
        return password == self.__password


# Optional usage example (this part can be removed for automated tests)
if __name__ == "__main__":
    user = User("Test User", "1234")
    print(user.is_valid_password("1234"))  # True
    print(user.is_valid_password("0000"))  # False

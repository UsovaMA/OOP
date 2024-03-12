#include "string.h"

/// <summary>
/// ����������� �� ���������.
/// </summary>
String::String() {
    _size = 0;
    _capacity = STEP_CAPACITY;
    _data = new char[_capacity];
    _data[0] = '\0';
}

/// <summary>
/// ����������� �����������.
/// </summary>
/// <param name="str"> - ���������� ������</param>
String::String(const String& str) {
    _size = str._size;
    _capacity = str._capacity;
    _data = new char[_capacity];
    for (size_t i = 0; i < _size; i++) {
        _data[i] = str._data[i];
    }
    _data[_size] = '\0';
}

/// <summary>
/// ����������.
/// </summary>
String::~String() {
    delete[] _data;
    _data = nullptr;
}

/// <summary>
/// �������� ������ �� �������.
/// </summary>
/// <returns>
/// true - ���� ������ �����,
/// false - �����.
/// </returns>
bool String::empty() const noexcept {
    return _size == 0;
}

/// <summary>
/// ������ ��� ������� ������.
/// </summary>
/// <returns>������ (�����) ������</returns>
size_t String::size() const noexcept {
    return _size;
}
/// <summary>
/// ������� ��������� (�������������������).
/// </summary>
/// <param name="str"> - ������ ��� ���������</param>
/// <returns>
/// 1 - ���� �������� ������ ������,
/// -1 - ���� �������� ������ ������,
/// 0 - ���� ������ ���������.
/// </returns>
int String::compare(const String& str) const noexcept {
    for (size_t i = 0; i < algorithms::min(_size, str._size); i++) {
        if (this->_data[i] < str._data[i]) {
            return 1;
        }
        else if (this->_data[i] > str._data[i]) {
            return -1;
        }
    }
    if (this->_size > str._size) return 1;
    else if (this->_size < str._size) return -1;
    else return 0;
}

/// <summary>
/// ������� ������� � ����� ������.
/// </summary>
/// <param name="c"> - ������ ��� �������</param>
void String::push_back(char c) {
    if (this->full()) {
        this->reserve(_capacity);
    }

    _data[_size] = c;
    _data[++_size] = '\0';
}

/// <summary>
/// �������� ������� �� ����� ������.
/// <exception cref="std::logic_error">����������, ���� �������� ������ �����.</exception>
/// </summary>
void String::pop_back() {
    if (this->empty()) {
        throw std::logic_error("Error in function \
                  \"void pop_back()\": source string is empty");
    }
    _data[--_size] = '\0';
}

// ���� ������ ����������
/// <summary>
/// ������� ������ ����� �������� ������� � ��������.
/// </summary>
/// <param name="pos"> - ������� ��� ������� � �������� ������.</param>
/// <param name="str"> - ������ ��� �������</param>
/// <returns>��������� �������� ������</returns>
String& String::insert(size_t pos, const String& str) {
    String begin(*this, 0, pos);
    String end(*this, pos, _size - pos);
    begin.append(str);
    begin.append(end);
    this->swap(begin);
    return *this;
}

/// <summary>
/// ����� ������� ���������� � �������� ������ � ����� �� �������� �������� ������.
/// </summary>
/// <param name="str"> - ����� �������� ��� ������</param>
/// <param name="pos"> - �������, � ������� ������� �������� �����</param>
/// <returns></returns>
size_t String::find_first_of(const String& str, size_t pos = 0) const {
    for (size_t i = pos; i < _size; i++) {
        for (size_t j = 0; j < str._size; j++) {
            if (_data[i] == str._data[j]) {
                return i;
            }
        }
    }
    return -1;
}

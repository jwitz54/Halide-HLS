

class test_int{
private:
	int val;
public:
	test_int(int initVal){
		val = initVal;
	}
	test_int(void){
		val = 0;
	}

	// Operator overloading for ints
	void operator=(int newVal){
		val = newVal;
	}
	int operator+(int addVal){
		return val + addVal;
	}
	int operator-(int subVal){
		return val - subVal;
	}
	int operator!=(int neqVal){
		return val != neqVal;
	}
	int operator<=(int leqVal){
		return val <= leqVal;
	}
	int operator>=(int greqVal){
		return val >= greqVal;
	}
	int operator==(int eqVal){
		return val == eqVal;
	}
	int operator>(int grVal){
		return val > grVal;
	}
	int operator<(int lsVal){
		return val < lsVal;
	}

	// Operator overloading for test_ints
	void operator=(test_int newVal){
		val = newVal.val;
	}
	test_int operator+(test_int addVal){
		return val + addVal.val;
	}
	test_int operator-(test_int subVal){
		return val - subVal.val;
	}
	test_int operator!=(test_int neqVal){
		return val != neqVal.val;
	}
	test_int operator<=(test_int leqVal){
		return val <= leqVal.val;
	}
	test_int operator>=(test_int greqVal){
		return val >= greqVal.val;
	}
	test_int operator==(test_int eqVal){
		return val == eqVal.val;
	}
	test_int operator>(test_int grVal){
		return val > grVal.val;
	}
	test_int operator<(test_int lsVal){
		return val < lsVal.val;
	}

	// Conversion
	operator int() const {
		return val;
	}
	explicit operator void*() const{
		return (void*)&val;
	}
	explicit operator halide_device_interface_t*() const{
		return (halide_device_interface_t*)&val;
	}
};

struct house {
	int id;
	int beds;
	int baths;
	int sqft;
	float acres;
	int price;
};

void print_header(void);
void print_houses(struct house a[], int n);
void print_one_house(struct house a);
void print_bedrooms(struct house a[], int n, int beds);
void print_lot(struct house a[], int n, float lot);
void print_price(struct house a[], int n, int minprice, int maxprice);




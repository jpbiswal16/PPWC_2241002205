// Write C statements to carry out the following steps.

// (a) If item is nonzero, then multiply product by item and save the result in product ; other-
// wise, skip the multiplication. In either case, print the value of product.

// (b) Store the absolute difference of x and y in y , where the absolute difference is ( x - y ) or
// (y - x ), whichever is positive. Do not use the abs or fabs function in your solution.
// (c) If x is 0 , add 1 to zero count. If x is negative, add x to minus sum. If x is greater than 0 ,
// add x to plus sum.


// a
if (item != 0) {
    product *= item;
}
printf("Product: %d\n", product);
// b
y = (x > y) ? (x - y) : (y - x);
// c
if (x == 0) {
    zero_count += 1;
} else if (x < 0) {
    minus_sum += x;
} else { // x > 0
    plus_sum += x;
}
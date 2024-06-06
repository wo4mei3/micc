lifetime <depth p, kind a>
struct X;

lifetime <depth p, kind a>
struct X {
    struct X<p,a> p a* a;
};

int main() using p {
    struct X<p>;
    int p* x;
    x;
    return 0;
}

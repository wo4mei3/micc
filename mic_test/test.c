lifetime <depth p, kind a>
struct X;

lifetime <depth p, kind a>
struct X {
    struct X<p,a> p a* a;
};

lifetime <depth p>
int func(){
    return 0;
}

int main() using p {
    struct X<X>;
    func<p>();
    int p* x;
    x;
    return 0;
}

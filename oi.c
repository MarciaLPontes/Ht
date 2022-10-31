#include "bits/stdc++.h"
 
#ifdef LOCAL
#include "F:\CPP\Debug\debug.h"
#else
#define print(...) 1;
#endif
 
using i64 = long long;
 
std::seed_seq seed
{
    (uint32_t)std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now().time_since_epoch()).count(),
    (uint32_t)std::random_device()(),
    (uint32_t)(uintptr_t)std::make_unique<char>().get(),
    (uint32_t)__builtin_ia32_rdtsc()
};
std::mt19937 rng(seed);
 
template<class T = int> 
T get_rand(T l, T r) 
{
    assert(l <= r);
    return std::uniform_int_distribution<T>(l, r)(rng);
}
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int n, a, b;
    std::cin >> n >> a >> b;
 
    std::vector<int> p(n);
    for (int i = 0; i < n; i++)
        std::cin >> p[i];
 
    auto orig = p;
 
    std::function<void()> f = [&]()
    {
        if (1. * clock() > .8 * CLOCKS_PER_SEC)
        {
            std::cout << "NO\n";
            std::exit(0);
        }
 
        std::map<int, int> ma, mb;
        for (auto &x : orig)
            ma[x] = mb[x] = 1;
 
        std::map<int, int> ans;
        std::shuffle(std::begin(p), std::end(p), rng);
        for (int i = 0; i < n; i++)
        {
            if (!ma.contains(p[i]))
                continue;
 
            ma.erase(p[i]);
            mb.erase(p[i]);
            if (ma.contains(a - p[i]))
            {
                ma.erase(a - p[i]);
                mb.erase(a - p[i]);
                ans[p[i]] = 0;
                ans[a - p[i]] = 0;
            }
            else if (mb.contains(b - p[i]))
            {
                ma.erase(b - p[i]);
                mb.erase(b - p[i]);
                ans[p[i]] = 1;
                ans[b - p[i]] = 1;
            }
            else
                f();
        }
 
        std::cout << "YES\n";
        for (int i = 0; i < n; i++)
            std::cout << ans[orig[i]] << " \n"[i == n - 1];
        std::exit(0);
    };
 
    f();
 
    return 0;
}

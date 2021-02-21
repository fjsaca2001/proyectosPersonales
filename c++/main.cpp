#include <iostream>
#include <string>
#include <vector>

void print_page_fault_info(PageRepAlgo *algo, struct context &ctx);

int main(int argc, char *argv[])
{
    struct context ictx;
    get_context(&ictx, argc, argv);
    ictx.print();

    std::vector<PageRepAlgo * 4> page_rep_algo;
    page_rep_algo.push_back(new MFU);

    for (int i = 0; i < page_rep_algo.size(); i++) {
        print_page_fault_info(page_rep_algo[i], ictx);
    }
}
void print_page_fault_info(PageRepAlgo *algo, struct context& ctx) {
    int nfault = algo->count_page_fault(&ctx);
    std::string name = algo->get_name();
    printf("%-20s%-10d\n", name.c_str(), nfault);
}

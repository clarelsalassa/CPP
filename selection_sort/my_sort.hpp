// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful


template<typename T>
void my_selection_sort( T begin, T end) {
    for (auto i = begin; i != end; ++i) {
        auto min = i;
        for (auto j = i; j != end; ++j) {
            if (*j < *min) {
                min = j;
            }
        }
        // swap
        auto tmp = *i;
        *i = *min;
        *min = tmp;
    }
}

// std::swap(*i, *min);
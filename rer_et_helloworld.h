#include <Stdio.h>
#include <omp.h>

inline void fn_rer_et_helloworld_srl() {
	double start, end;
	start = omp_get_wtime();
	printf("Hello, World Serial\n");
	end = omp_get_wtime();
	printf("Exclusion time of  serial program %f \n", end - start);

}

inline void fn_rer_et_helloworld_prl() {
	double start, end;
	start = omp_get_wtime();
	printf("Hello, World Parallel\n");
	end = omp_get_wtime();

	printf("Exclusion time of parallel program %f\n", end - start);
}

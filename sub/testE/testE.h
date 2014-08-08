#ifndef __TESTE_H__
#define __TESTE_H__

#ifdef TESTE_EXPORTS
	#ifdef _MSC_VER
		#define TESTE_API	__declspec(dllexport)
	#else /* Linux */
		#define TESTE_API	__attribute__ ((visibility ("default")))
	#endif /* _MSC_VER */
#else
	#ifdef _MSC_VER
		#define TESTE_API	__declspec(dllimport)
	#else /* Linux */
		#define TESTE_API
	#endif /* _MSC_VER */
#endif /* TESTE_EXPORTS */

void TESTE_API PrintHelloWorldSubDir(void);

#endif /* __TESTE_H__ */

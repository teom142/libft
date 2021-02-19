# libft
42과제하면서 쓸 libft~
1.소개

    매우 유용한 표준 함수들을 사용할 수 없을 때 C 프로그래밍이 매우 지루해질 수 있습니다. 본 프로젝트는 이런 함수들을 다시 쓰고, 그것들을 이해하고, 그 함수들의 사용법을 배울 기회를 제공합니다. 이 라이브러리는 나중에 진행할 C 프로젝트에 도움이 될 것입니다.
    본 프로젝트를 통해서, 우리는 여러분이 만든 함수 리스트를 확장할 수 있는 기회를 제공합니다. 시간을 내서 일 년 내내 자신만의 libft를 확장해 보세요.

2.일반 지침

    프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 있는 경우,해당 파일/함수 들은 norm 검사에 포함되며, norm error가 있을 시, 0점을 받게 될것입니다.
    
    함수들은 정의되지 않은 행동들과는 별개로 예기치 않게 중단되어서는 안 됩니다.(예를 들어, segmentation fault, bus error, double free 등.) 만약 이렇게 중단되면, 여러분의 프로젝트는 작동하지 않는 것으로 여겨지고 평가에서 0점을 받을 것입니다.
    
    필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납되지 않습니다.
    
    해당 과제에서 요구한 경우 Makefile 을 제출해야하며, 해당 Makefile은 문제에서 제시된 결과물을 -Wall, -Wextra, -Werror 플래그과 함께 컴파일해야합니다. Makefile 은 relink 되어서는 안 됩니다.
    
    Makefile은 최소한 $(NAME), all, clean, fclean, re 규칙을 포함해야 합니다.
    
    프로젝트에 보너스를 제출하려면, Makefile에 bonus 규칙을 포함해야하며, 해당 규칙은 프로젝트의 메인 파트에서 금지되었던 모든 다양한 헤더, 라이브러리,또는 함수들을 Makefile에 추가할 수 있습니다. 보너스는 반드시 '_bonus.{c/h}' 라는 다른 파일에 있어야 합니다. 필수 파트와 보너스 파트는 개별적으로 평가될 것입니다.
    
    프로젝트에서 libft 사용이 허가된 경우, 해당 소스들과 연관된 Makefile을 libft 폴더에 Makefile과 함께 복사해 넣어두어야 합니다. 프로젝트의 Makefile은 반드시 libft 의 Makefile을 사용하여 컴파일한 다음, 프로젝트 소스를 컴파일 해야만 합니다.
    
    제출할 필요가 없고 채점되지 않더라도 우리는 여러분이 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 이 프로그램은 여러분의 과제물과 동료들의 과제물을 쉽게 검증할 기회를 제공할 것입니다. 평가하는 동안 이 테스트 프로그램들이 특히 유용하다는 것을 알게 될 것입니다. 평가 중에는 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 자유롭게 사용할 수 있습니다.
    
    할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 채점 할 것입니다. Deepthought가 평가를 하게 된다면, 동료평가 이후에 수행됩니다. 만약 Deepthought가 평가 중 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.

3.필수사항

  Program name	:  libft.a
  
  Turn in files	:  *.c, libft.h, Makefile
  
  Makefile	:  Yes
  
  External functs.	:  Detailed below
  
  Libft authorized	:  Non-applicable
  
  Description  :  여러분의 교육과정에서 사용할 중요한 함수들이 들어있는 자신만의 라이브러리를 만드세요.

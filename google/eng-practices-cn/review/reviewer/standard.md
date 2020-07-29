# Code Review标准

Code Review的主要目的是始终保证随着时间的推移，谷歌代码越来越健康，所有Code Review的工具和流程也是针对于此设计的。  

为了完成这点，我们不得不权衡利弊。  

首先，开发者应当在他们代码中做一些 _改进_ ，如果你永远都不做出改进，代码库整体质量也不会提升。但是如果审查者为难所有变更，开发者未来也会失去改进的动力。  

另一方面，保证代码库随时间推移越来越健康是审查者的责任，而不是让代码库质量变得越来越差。这很棘手，因为代码质量一般都会随着时间推移越来越差，尤其是在团队有明确时间限制、而且他们觉得不得不采取一些投机取巧的方式才能完成任务的情况下。  

但是，代码评审者得对他们Review的代码负责，所以他们想始终确保代码库一致、可维护（其他指标见["Code Review应该关注什么？"](looking-for.md)）  

依据这些，我们将以下准则作为我们期望的Code Review标准：   

**通常而言，只要代码对系统有明显的提升且正常工作，即便不完美，评审者也应该倾向于通过这次变更。**    
 
这是所有Code Review指南中的高级原则。  

当然这也有些局限。例如，如果变更里加入了有些评审者在系统里不想要的功能，即便代码设计的很好，评审者也可以拒绝掉。   

没有完美无缺的代码，只有越来越好的代码。代码评审者绝不应该要求开发者打磨好CL中的每个细节才予以通过，相反，评审者应该权衡项目进度和他们给出建议的重要性，适当放宽要求。评审者应该追求 _持续提高_ ，而不是追求完美。那些可以提升整个系统可维护性、可读性和可以理解性的变更不应该因为代码不够完美而被推迟几天甚至几周。  

评审者要 _始终_ 不拘谨于在代码评论里提示可以更好的想法。 但如果不是很重要信息，可以在评论前面加上标识告诉他们可以忽略。  

注意：这篇文档中没有任何地方辩解在变更中的检查会让整个系统代码变得 _更糟糕_ 。你唯一能做的在[紧急度](../emergencies.md)中说明。   

## 指导性   
Code Review有个重要的作用，那就是可以教会开发者关于语言、框架或者通用软件设计原理。在Code Review中留下评论来帮助开发者学习新东西是很值得提倡的，毕竟共享知识也是长期提升系统代码健康度的一部分。但请注意，如果你的评论纯粹是教育性的，并且不是这篇文档中提到的关键标准，请在前面加上“Nit:”标识，或者明确指出不需要在这次变更中解决。  

## 原则
*   技术和数据高于意见和个人偏好。
*   关于风格问题, [风格指南](http://google.github.io/styleguide/)是绝对的权威。任何不在样式指南中指出的样式(比如空格等)都是个人偏好的问题。风格应该与现有的一致。如果没有以前的风格，就按作者的风格来。
*   **软件设计从来不是纯粹的代码风格或是个人偏好问题**，它们是基于一些应当被权衡的规则而不仅仅是个人倾向。有时候也会有多种有效的选项，如果开发者能证明(通过数据或者原理)这些方法都同样有效，那么评审者应该接受作者的偏好，否则应该遵从软件设计标准。 
*   如果没有其他的规则使用，只要保证不会影响系统的健康度，评审者可以要求开发者保持和现有的代码库一致。 
 
## 解决代码冲突 
如果Code Review中有任何冲突，开发人员和评审人员都应该首先根据[开发者指南](../developer/)和[评审者指南](index.md)中其他文档的内容，尝试达成一致意见。  

当很难达成一致时，开发者和评审者不应该在Code Review评论里解决冲突，而是应该召开面对面会议或者找个权威的人来协商。（如果你在评论里协商，确保在评论里记录了讨论结果，以便日后其他人翻阅。）

如果这样都解决不了问题，那解决问题的方式就应该升级了。通常的方式是拉着团队一起讨论、让团队主管来权衡、参考代码维护者的意见，或者让管理层来决定。**不要因为开发者和评审者不能达成一致而把变更一直放在那里。**   

下一篇：[Code Review应该关注什么？](looking-for.md)
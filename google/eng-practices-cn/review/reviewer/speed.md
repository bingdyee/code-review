# Code Review的速度

## 为什么Code Review应该快？

**在谷歌内部，我们在持续优化团队开发新产品的速度**，而不是优化单个开发人员编写代码的速度。 个人开发的速度固然重要，但它没有团队整体的速度那么重要。  

如果Code Review速度慢了，可能会发生以下这些事： 

*   **整个团队的速度会降低**，是的，你不快速响应别人的Code Review也可以完成其他的工作。但是，整个团队的新功能、bug修复可能会因为没有人做cr被延迟几天、几周甚至几个月。   
*   **开发者应维护Code Review的流程**，如果审查者很少回复Code Review，但是每次都对CL提出大量的改动，这可能会打击到开发者。通常，开发者可能会抱怨审查者太严格。如果审查者能在开发者更新后快速响应，并提出有实质性提升的建议（能显著提升代码运行状况的CL），抱怨就会消失。 **Code Review中绝大多数抱怨会随着CR速度的提升而消失。**  
*   **可能影响到代码质量。** 如果CR慢了，可能会给开发者一种需要提交不太好代码的压力。CR慢了，也会影响到代码清理、重构、和现有CL的进一步提升。  

## 应该以什么样的速度做Code Review？ 

如果你不是在做需要高度专注的任务，**Code Review应该越快越好** 
**应当在一个工作日之内**回应Code Review请求。 
遵循这些指导意味着典型的CL应该在一天内进行多轮审查（如果需要）。

## 速度 vs 中断 

只有一种情况下，个人的速度要胜过团队速度。**如果您正在处理诸如编写代码之类的重要工作，请不要打断自己的工作去做Code Review**，研究人在专注中被打断后需要很长的时间才能重新恢复到专注状态。所以，为了不让其他开发者等会而且中断自己的编码工作，明显得不偿失。  
所以，建议你在工作断点的时候回应Code Review，比如写完代码、午饭后、会议结束后、从茶水间回来……  


## 快速响应 

当我们谈论Code Review的速度时，一方面是指响应时间，另一方面是指整个Review从提交到通过的时间。整个过程应该足够快，但是对于每个人来说，迅速做出反应比迅速完成整个过程更为重要。  
即使有时需要很长时间才能完成整个Code Review流程，评审者在整个过程中的快速响应也可以大大缓解开发人员因为Code Review“慢”而产生的挫败感。    
如果你太忙不能全身心投入到Code Review中，你也应该让开发者知道你什么时候会去Review，或者建议其他评审者快速响应，再或者[提供一些初步的建议](navigate.md)。（注意：这不是建议你中断自己的工作，而是在工作间隙合理响应）  
**评审者有必要花时间去做Code Review来保证代码符合[标准](standard.md)**，不管怎么样，每个回应应当保证足够[快速](#fast)。  

## 跨时区Code Review 
当遇到跨时区的Code Review时，尽量在作者回家前回复。如果他们已经回家了，尽量在他们每天来公司前完成Code Review。  

## LGTM和注释   

为了让CR更快，有些情况下也应该让CR提前通过，即便有些评论没有被解决，比如：  

*   审查者信任开发者能适当解决所有评审者的建议。   
*   其余的改动很小，开发者不必做。  

除非另有明确说明，评审者应指明他们打算使用这些选项中的哪一个。  
当开发者和评审者在不同时区时，应当着重考虑下通过CR，否则开发者还得等一天。  

## 大的CL  

如果有人给你提交了一个非常大的Code Review，你也不确定你有时间看，你最好建议开发者[把CL拆分成几个小的部分](../developer/small-cls.md)，分多次Code Review，而不是一次性全部提交上来。这即便开发者多做一些额外的工作，也是可以把它拆分开的，而且拆分也有利于评审者。   

如果CL*不能*拆分成多个小CL，你也没有时间快速完整的Review整个代码，只是对整体设计提一些建议，然后发回给开发者改进。作为评审者，你的目标之一是在不牺牲代码质量的前提下，不阻碍开发者的进程或者尽可能让他们向前推进。  
 
## 持续提升Code Review 

如果你遵从这些建议并在Code Review中严格执行这些准则，你就会发现整个Code Review的流程会越来越快。 开发者将了解健康代码的要求，并从一开始就交出完美的代码，然后Code Review的时间会越来越少。评审者将学会如何快速做出响应，并且不是在这个Code Review过程中增加不必要的延迟。   
但是，不要为了提升速度牺牲[Code Review的标准](standard.md)和代码质量。 从长远来看，这并不会提升速度。  

## 紧急情况 

当然也有一些紧急的CL需要快速走完这个Code Review流程，这时候在质量上的把控可以稍微放松一些。可以参考[紧急事件](../emergencies.md#what)一文来了解哪些是紧急事件哪些不是。   

下一篇：[如何在Code Review中写评论](comments.md) 

# Simple PoC for Alternative Dimension mechanic

After seeing how new Lords of the Fallen (2023) and upcoming Sorry We're Close (will use abbreviated names, LotF and SWrC from now) both have the "alternative realm" features, aside from getting nostalgic about Soul Reaver, I also got intrigued by it and it got me thinking - how would one implement something like this.

![](https://github.com/GD-Kennedy/PoC_UmbralThirdEye/blob/main/showcase.gif)

Main idea behind this feature is rather simple but leaves a lot of space for extensions and cool mechanics. In short, under the default world visible by the player, there's a second version of it - usually altered in some way, let it be visually or mechanically. Previously mentioned Legacy of Kain: Soul Reaver also shares the same concept on foundation level and was limiting itself to being a simple two layers of the same world, interconnecting every now and then pretty sparingly. Now that we got that covered, let's talk a bit about what are you looking at - this is my attempt at recreating a very simple version of "alternative realm" inside Unreal Engine. This means it will be barebone and no coding (everything is handled in BPs or graphs) but near the end of this page I'll throw in few suggestions on what can be improved.


In both games player can utilize it to reach new passages, discover interactions, or encounter different or altered versions of the enemies. My version is closer to SWrC but it should be easily adjustable to more of the LotF style. We will mostly focus on basics but there's a lot you can do with this.

# Simple Implementation and more
Moro videos, insights and my simple implementations steps can be found here:

https://grzegorz-dominiak.dev

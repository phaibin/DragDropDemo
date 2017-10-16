# DragDropImageView

---

This is a demo for adding dragging and droppings support to `NSImageView`, based on Apple's sample code ["CocoaDragAndDrop"](https://developer.apple.com/library/content/samplecode/CocoaDragAndDrop/).

Apple's "CocoaDragAndDrop" sample shows you how to drag image from Finder to an `NSImageView` and how to drag an image between `NSImageView`s, but it doesn't show you how to drag from `NSImageView` to Finder and save the image.

I added some code to "DragDropImageView" to show you how to do this. Also, the two properties: `allowDrag` and `allowDrop` are available which control if the `NSImageView` can drag or drop the image.
@import UIKit;
@import GLKit;

@protocol PPSSignatureDelegate;

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (readonly, nonatomic) UIImage *signatureImage;

@property (assign, nonatomic) BOOL eraseOnLongTouch;

@property (nonatomic, weak) id<PPSSignatureDelegate> signatureDelegate;

- (void)erase;
- (void)tearDown;
- (UIImage *)signatureImage;

@end

@protocol PPSSignatureDelegate <NSObject>

-(void)signatureViewTouched:(PPSSignatureView*)signatureView;

@end

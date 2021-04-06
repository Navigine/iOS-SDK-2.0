#import "NCPoint.h"
#import <Foundation/Foundation.h>


@interface NCMultiLineMapObject : NSObject

- (void)setLines:(nonnull NSArray<NSArray<NCPoint *> *> *)lines;

- (void)setWidth:(float)width;

- (float)getWidth;

- (void)setData:(nonnull NSData *)data;

- (nonnull NSData *)getData;

- (void)setEnabled:(BOOL)visibility;

- (void)setColor:(float)red
           green:(float)green
            blue:(float)blue
           alpha:(float)alpha;

@end

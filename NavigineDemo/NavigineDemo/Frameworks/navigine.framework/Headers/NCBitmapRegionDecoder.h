#import "NCExport.h"
#import "NCRectangle.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class NCBitmapRegionDecoder;


NAVIGINE_EXPORT
@interface NCBitmapRegionDecoder : NSObject

+ (nullable NCBitmapRegionDecoder *)newInstance:(nonnull NSData *)data;

- (nullable UIImage *)decodeRegion:(nonnull NCRectangle *)rect
                        sampleSize:(int32_t)sampleSize;

@end

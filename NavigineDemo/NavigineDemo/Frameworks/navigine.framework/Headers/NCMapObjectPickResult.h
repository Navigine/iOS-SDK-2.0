#import "NCExport.h"
#import "NCLocationPoint.h"
#import <Foundation/Foundation.h>
@class NCMapObject;


NAVIGINE_EXPORT
@interface NCMapObjectPickResult : NSObject

@property (nonatomic, nonnull, readonly) NCLocationPoint * point;

@property (nonatomic, nullable, readonly) NCMapObject * mapObject;

@end

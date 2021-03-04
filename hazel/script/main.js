var JscotHazel = /** @class */ (function () {
    function JscotHazel() {
    }
    JscotHazel.AddWindow = function (callback) {
        this.WindowObjects.push(callback);
    };
    JscotHazel.Clock = function () {
        for (var _i = 0, _a = this.WindowObjects; _i < _a.length; _i++) {
            var obj = _a[_i];
            var func = obj.onRender.bind(obj);
            func();
        }
    };
    JscotHazel.WindowObjects = [];
    return JscotHazel;
}());
var DemoWindow = /** @class */ (function () {
    function DemoWindow() {
        this.table = { open: true };
    }
    DemoWindow.prototype.onRender = function () {
        Begin("Test Window", this.table, 0);
        End();
    };
    return DemoWindow;
}());
var demo_window = new DemoWindow;
print("JSCOT HAZEL. BOOT!");
JscotHazel.AddWindow(demo_window);
//# sourceMappingURL=main.js.map
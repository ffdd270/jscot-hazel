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
        this.text = "NOT PUSHED";
    }
    DemoWindow.prototype.onRender = function () {
        if (!Begin("Test Window", this.table, 0)) {
            return;
        }
        if (Button(this.text, { x: 100, y: 100 })) {
            this.text = "PUSHED";
        }
        ImGui_Text("Test Table : " + this.table.open);
        End();
    };
    return DemoWindow;
}());
var Test;
(function (Test) {
    function Ab() {
    }
})(Test || (Test = {}));
var demo_window = new DemoWindow;
print("JSCOT HAZEL. BOOT!");
JscotHazel.AddWindow(demo_window);
//# sourceMappingURL=main.js.map
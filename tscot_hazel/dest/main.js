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
        Begin("Test Window", this.table, 0);
        if (Button(this.text, { x: 100, y: 100 })) {
            this.text = "PUSHED";
        }
        ImGui_Text("Test Table : " + this.table.open);
        End();
    };
    return DemoWindow;
}());
var Demo2Window = /** @class */ (function () {
    function Demo2Window() {
        this.num = 0;
    }
    Demo2Window.prototype.onRender = function () {
        Begin("Test Window 2", { open: true }, 0);
        ImGui_Text("This is New Table.");
        ImGui_Text("Yeah. Compliled!");
        if (Button("If Button Pressed, +1.", { x: 200, y: 20 })) {
            this.num += 1;
        }
        ImGui_Text("NUM : " + this.num);
        End();
    };
    return Demo2Window;
}());
var demo_window = new DemoWindow;
JscotHazel.AddWindow(demo_window);
JscotHazel.AddWindow(new Demo2Window());
//# sourceMappingURL=main.js.map
type WindowObject = { onRender: () => void };
type WindowOpenObject = { open: boolean }
class JscotHazel
{
    private static WindowObjects : WindowObject[] = []

    static AddWindow( callback : WindowObject )
    {
        this.WindowObjects.push( callback );
    }

    static Clock()
    {
        for ( let obj of this.WindowObjects )
        {
            let func = obj.onRender.bind( obj );
            func();
        }
    }
}

class DemoWindow
{
    table : WindowOpenObject = { open: true }
    text : string = "NOT PUSHED"

    public onRender()
    {
        Begin("Test Window",  this.table, 0 )
        if ( Button( this.text, { x: 100, y: 100 } ) )
        {
            this.text = "PUSHED";
        }

        ImGui_Text("Test Table : " + this.table.open );

        End();
    }
}


class Demo2Window
{
    num : number = 0;

    public onRender()
    {
        Begin("Test Window 2",  {open: true}, 0 )
        ImGui_Text("This is New Table.")
        ImGui_Text( "Yeah. Compliled!")
        if( Button("If Button Pressed, +1.", { x: 200, y: 20 }))
        {
            this.num += 1;
        }
        ImGui_Text("NUM : " + this.num );
        End();
    }
}


let demo_window = new DemoWindow;
JscotHazel.AddWindow( demo_window );
JscotHazel.AddWindow( new Demo2Window() );